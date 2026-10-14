// sub_080EABD8 at 0x080EABD8 (thumb)

undefined8 sub_080EABD8(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0) {
    *param_1 = 2;
    cVar1 = sub_080EAF78(param_1,iVar2);
  }
  else {
    cVar1 = sub_080EF11C(param_1,iVar2,
                         *(undefined4 *)(&DAT_0835e8ac + (uint)*(byte *)((int)param_1 + 1) * 4));
    sub_08002EA0(0x90);
    sub_080D5CCC(param_1[4],*(undefined *)(param_1 + 1),param_1[6]);
  }
  return CONCAT44(in_lr,(int)cVar1);
}

