// sub_0807F400 at 0x0807F400 (thumb)

undefined8 sub_0807F400(undefined4 *param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x16;
    *(undefined4 *)(iVar1 + 0x14) = 0x807e709;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fac;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff6;
    *(undefined *)(iVar1 + 0x10) = 3;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
    iVar2 = param_2 * (short)(&DAT_080c8e24)[param_3 + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar2 >> 8;
    param_2 = param_2 * (short)(&DAT_080c8e24)[param_3];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_2 >> 8;
    *(byte *)(iVar1 + 0x12) = param_3;
    sub_0807F3B0(iVar1,0);
    sub_0807F3B0(iVar1,0x40);
    sub_0807F3B0(iVar1,0x80);
    sub_0807F3B0(iVar1,0xc0);
  }
  return CONCAT44(in_lr,iVar1);
}

