// sub_08033100 at 0x08033100 (thumb)

undefined8 sub_08033100(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x17f);
  if ((param_2 != bVar1) || (param_3 != 0)) {
    iVar2 = sub_08033018(param_2);
    iVar3 = sub_08033018((uint)bVar1);
    if (iVar2 == iVar3) {
      sub_0801EA38(param_1,param_2,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801E9FC(param_1,param_2);
    }
  }
  return CONCAT44(in_lr,param_2);
}

