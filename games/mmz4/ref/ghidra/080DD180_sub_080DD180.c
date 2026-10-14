// sub_080DD180 at 0x080DD180 (thumb)

undefined4 sub_080DD180(undefined4 *param_1,undefined param_2,undefined param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80dd2bd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    if ((param_4 & 0xff) == 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x10;
    }
    *(char *)(iVar1 + 0x4c) = (char)(param_4 & 1);
    *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xef | (byte)((param_4 & 1) << 4);
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return in_lr;
}

