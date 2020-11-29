#include <iostream>

using namespace std;

/** simple factory **/
//int main1()
//{
//    #include "shoes.h"
//    #include "simple_factory/factory_shoes.h"


//    // 构造工厂对象
//    ShoesFactory shoesFactory;

//    // 从鞋工厂对象创建阿迪达斯鞋对象
//    Shoes *pNikeShoes = shoesFactory.CreateShoes(NIKE);
//    if (pNikeShoes != NULL)
//    {
//        // 耐克球鞋广告喊起
//        pNikeShoes->Show();

//        // 释放资源
//        delete pNikeShoes;
//        pNikeShoes = NULL;
//    }

//    // 从鞋工厂对象创建阿迪达斯鞋对象
//    Shoes *pLiNingShoes = shoesFactory.CreateShoes(LINING);
//    if (pLiNingShoes != NULL)
//    {
//        // 李宁球鞋广告喊起
//        pLiNingShoes->Show();

//        // 释放资源
//        delete pLiNingShoes;
//        pLiNingShoes = NULL;
//    }

//    // 从鞋工厂对象创建阿迪达斯鞋对象
//    Shoes *pAdidasShoes = shoesFactory.CreateShoes(ADIDAS);
//    if (pAdidasShoes != NULL)
//    {
//        // 阿迪达斯球鞋广告喊起
//        pAdidasShoes->Show();

//        // 释放资源
//        delete pAdidasShoes;
//        pAdidasShoes = NULL;
//    }

//    return 0;

//}

/** method factory **/
//int main2()
//{
//        #include "factory_method/factory_shoes.h"
//       // ================ 生产耐克流程 ==================== //
//       // 鞋厂开设耐克生产线
//       ShoesFactory *niKeProducer = new NiKeProducer();
//       // 耐克生产线产出球鞋
//       Shoes *nikeShoes = niKeProducer->CreateShoes();
//       // 耐克球鞋广告喊起
//       nikeShoes->Show();
//       // 释放资源
//       delete nikeShoes;
//       delete niKeProducer;

//       // ================ 生产阿迪达斯流程 ==================== //
//       // 鞋厂开设阿迪达斯生产者
//       ShoesFactory *adidasProducer = new AdidasProducer();
//       // 阿迪达斯生产线产出球鞋
//       Shoes *adidasShoes = adidasProducer->CreateShoes();
//       // 阿迪达斯球鞋广喊起
//       adidasShoes->Show();
//       // 释放资源
//       delete adidasShoes;
//       delete adidasProducer;
//       return 0;
//}

/** abstract factory **/
//int main3()
//{

//            //
//            #include "abstract_factory/factory.h"
//            #include "abstract_factory/product.h"
//            // ================ 生产耐克流程 ==================== //
//           // 鞋厂开设耐克生产线
//           Factory *niKeProducer = new NiKeProducer();

//           // 耐克生产线产出球鞋
//           Shoes *nikeShoes = niKeProducer->CreateShoes();
//           // 耐克生产线产出衣服
//           Clothe *nikeClothe = niKeProducer->CreateClothe();

//           // 耐克球鞋广告喊起
//           nikeShoes->Show();
//           // 耐克衣服广告喊起
//           nikeClothe->Show();

//           // 释放资源
//           delete nikeShoes;
//           delete nikeClothe;
//           delete niKeProducer;
//           return 0;
//}

//#include "template_factory/factory.h"
//#include "template_factory/product.h"
///** template factory**/
//int main4()
//{


//    // 构造耐克鞋的工厂对象
//    ConcreteFactory<Shoes, NiKeShoes> nikeFactory;
//    // 创建耐克鞋对象
//    Shoes *pNiKeShoes = nikeFactory.CreateProduct();
//    // 打印耐克鞋广告语
//    pNiKeShoes->Show();

//    // 构造优衣库衣服的工厂对象
//    ConcreteFactory<Clothe, UniqloClothe> uniqloFactory;
//    // 创建优衣库衣服对象
//    Clothe *pUniqloClothe = uniqloFactory.CreateProduct();
//    // 打印优衣库广告语
//    pUniqloClothe->Show();

//    // 释放资源
//    delete pNiKeShoes;
//    pNiKeShoes = NULL;

//    delete pUniqloClothe;
//    pUniqloClothe = NULL;

//    return 0;
//}

#include "regist_singleton_factory/register_factory.h"
#include "template_factory/product.h"
/** 产品注册模板类+单例工厂模板类 **/
int main(){
    // ========================== 生产耐克球鞋过程 ===========================//
       // 注册产品种类为Shoes（基类），产品为NiKe（子类）到工厂，产品名为nike
       ProductRegistrar<Shoes, NiKeShoes> nikeShoes("nike");
       // 从工厂获取产品种类为Shoes，名称为nike的产品对象
       Shoes *pNiKeShoes = ProductFactory<Shoes>::Instance().GetProduct("nike");
       // 显示产品的广告语
       pNiKeShoes->Show();
       // 释放资源
       if (pNiKeShoes)
       {
          delete pNiKeShoes;
       }

       // ========================== 生产优衣库衣服过程 ===========================//
       // 注册产品种类为Clothe（基类），产品为UniqloClothe（子类）到工厂，产品名为uniqlo
       ProductRegistrar<Clothe, UniqloClothe> adidasShoes("uniqlo");
       // 从工厂获取产品种类为Shoes，名称为adidas的产品对象
       Clothe *pUniqloClothe = ProductFactory<Clothe>::Instance().GetProduct("uniqlo");
       // 显示产品的广告语
       pUniqloClothe->Show();
       // 释放资源
       if (pUniqloClothe)
       {
          delete pUniqloClothe;
       }

       return 0;
}

