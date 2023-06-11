#include "qintdelegate.h"
#include <QSpinBox>

QIntDelegate::QIntDelegate()
{

}

QWidget *QIntDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QSpinBox* editor = new QSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(1000);
    editor->setFrame(false);    //设置QSpinBox是否有框架
    return editor;
}

void QIntDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    int value = index.model()->data(index , Qt::EditRole).toInt();     //从单元索引index的模型获得数据并转换成整型
    QSpinBox * spinbox = static_cast<QSpinBox * >(editor);              //将editor的类型转换为QSpinBox类型
    spinbox->setValue(value);                                          //设置spinbox显示的值
}

void QIntDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

    QSpinBox *spinbox  = static_cast <QSpinBox*> (editor);  //将editor的类型转换为 QSpinBox类型
    spinbox->interpretText();                              //如果该值自上一次行为发生改变则发送信号   我并没有链接槽函数
    int value = spinbox->value();
    model->setData(index , value , Qt::EditRole);          //将获取到的值传递给数据模型
}

void QIntDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

    editor->setGeometry(option.rect);         //option参数的rect()方法自己定义了合适大小。
}
