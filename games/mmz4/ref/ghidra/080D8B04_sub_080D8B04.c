// sub_080D8B04 at 0x080D8B04 (thumb)

undefined8
sub_080D8B04(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4,undefined param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x1c;
    *(undefined4 *)(iVar2 + 0x14) = 0x80d8bad;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined *)(iVar2 + 0x10) = param_5;
    *(undefined *)(iVar2 + 0x11) = 1;
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_1[1];
    *(uint *)(iVar2 + 0x74) = param_3 & 0xffff;
    *(undefined4 *)(iVar2 + 0x78) = param_4;
    if ((param_2 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_2 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_2 & 1) << 4);
  }
  return CONCAT44(in_lr,iVar2);
}

