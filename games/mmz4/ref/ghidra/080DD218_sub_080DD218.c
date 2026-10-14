// sub_080DD218 at 0x080DD218 (thumb)

undefined4
sub_080DD218(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined param_4,uint param_5
            )

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x2d;
    *(undefined4 *)(iVar2 + 0x14) = 0x80dd2bd;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    if ((param_5 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_5 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_5 & 1) << 4);
    *(undefined *)(iVar2 + 0x10) = param_3;
    *(undefined *)(iVar2 + 0x11) = param_4;
  }
  return in_lr;
}

