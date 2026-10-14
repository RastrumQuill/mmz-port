// sub_08094980 at 0x08094980 (thumb)

undefined8 sub_08094980(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x80949f5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023074;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f2;
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(iVar1 + 0x5c) = *param_3;
    *(undefined4 *)(iVar1 + 0x60) = param_3[1];
    *(undefined *)(iVar1 + 0x10) = 1;
    sub_08088120(iVar1);
    sub_080033F0(iVar1 + 0x6c,(&DAT_082b4714)[param_1 & 0xff]);
  }
  return CONCAT44(in_lr,iVar1);
}

