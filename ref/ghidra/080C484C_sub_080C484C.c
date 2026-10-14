// sub_080C484C at 0x080C484C (thumb)

undefined8 sub_080C484C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 * 0x1000000 < 1) {
LAB_080c48dc:
    iVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = sub_080BADB0(0,param_1);
      if (iVar2 == 0) goto LAB_080c48dc;
      *(int *)(param_1 + 0x14) = iVar2;
      sub_080014E8(&DAT_085323ac,0x10000);
      sub_0800179C(&DAT_085323b8,0x200);
    }
    *(undefined *)(param_1 + 3) = 1;
    sub_080014E8(&DAT_08532050 + (uint)*(byte *)(param_1 + 4) * 0x14,0x10000);
    sub_0800179C(&DAT_0853205c + (uint)*(byte *)(param_1 + 4) * 0x14,0x200);
    sub_080B49DC(*(undefined4 *)(param_1 + 0x10),(int)*(char *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 0x18));
    *(undefined *)(param_1 + 6) = 4;
    cVar1 = sub_080C48E4(param_1,(int)(char)param_2);
    iVar2 = (int)cVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

