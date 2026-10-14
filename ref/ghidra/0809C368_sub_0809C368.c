// sub_0809C368 at 0x0809C368 (thumb)

undefined8 sub_0809C368(undefined param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x56;
    *(undefined4 *)(iVar1 + 0x14) = 0x809c18d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230bc;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023116;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
    *(byte *)(iVar1 + 0x12) = (byte)(-(param_4 & 0xff) >> 0x1f);
  }
  return CONCAT44(in_lr,iVar1);
}

