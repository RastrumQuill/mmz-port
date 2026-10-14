// sub_080E1864 at 0x080E1864 (thumb)

undefined4
sub_080E1864(undefined4 *param_1,undefined param_2,uint param_3,char param_4,undefined param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x3e;
    *(undefined4 *)(iVar2 + 0x14) = 0x80e191d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    if ((param_3 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if (param_4 == '\0') {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0xfffffff0;
    }
    *(undefined4 *)(iVar2 + 100) = uVar3;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(undefined *)(iVar2 + 0x11) = param_2;
    *(undefined *)(iVar2 + 0x12) = param_5;
  }
  return in_lr;
}

