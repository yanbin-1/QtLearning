#ifndef QINTDELEGATE_H
#define QINTDELEGATE_H
#include <QStyledItemDelegate>


class QIntDelegate : public QStyledItemDelegate
{
public:
    QIntDelegate();

private:
    // 从基类拷贝editing中的函数

    /*
    必须实现以下几个函数:
    createEditor():创建用于编辑模型数据的widget组件，如QSpinBox,QComboBox。
    setEditorData():从数据模型获取数据，供widget组件进行编辑。
    setModelData():将widget上的数据更新到数据模型。
    updateEditorGeometry():用于给widget组件设置一个合适的大小。
    */
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE;

    void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor,
                      QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;

    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // QINTDELEGATE_H
