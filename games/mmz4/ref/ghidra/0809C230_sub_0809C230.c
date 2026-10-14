// sub_0809C230 at 0x0809C230 (thumb)

undefined8 sub_0809C230(undefined4 param_1,undefined param_2,undefined param_3,uint param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x29;
    *(undefined4 *)(iVar1 + 0x14) = 0x809c2cd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    if ((param_4 & 0xff) == 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x10;
    }
    *(char *)(iVar1 + 0x4c) = (char)(param_4 & 1);
    *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xef | (byte)((param_4 & 1) << 4);
  }
  return CONCAT44(in_lr,iVar1);
}

