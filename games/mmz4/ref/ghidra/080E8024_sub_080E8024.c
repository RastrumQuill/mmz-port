// sub_080E8024 at 0x080E8024 (thumb)

undefined4 sub_080E8024(undefined4 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x58;
    *(undefined4 *)(iVar2 + 0x14) = 0x80e80d1;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)(param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)(param_2 & 0xffff);
    if ((param_3 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if ((*(char *)(iVar2 + 0x10) == '\x05') && (*(byte *)(iVar2 + 0x11) < 4)) {
      sub_080E8024(param_1,(param_2 & 0xffff) + 1 & 0xffff,param_3 & 0xff);
    }
  }
  return in_lr;
}

