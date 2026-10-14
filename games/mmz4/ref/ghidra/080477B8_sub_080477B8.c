// sub_080477B8 at 0x080477B8 (thumb)

undefined8 sub_080477B8(int param_1,undefined4 param_2,undefined4 *param_3,byte param_4)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar2 + 9) = 0x1c;
      *(undefined4 *)(iVar2 + 0x14) = 0x80478a1;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar2 + 9) = 0x1c;
      *(undefined4 *)(iVar2 + 0x14) = 0x80478a1;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x22) = uVar1;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_3;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(byte *)(iVar2 + 0x11) = param_4;
    if (param_4 == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x10;
    }
    uVar4 = param_4 & 1;
    *(char *)(iVar2 + 0x4c) = (char)uVar4;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  }
  return CONCAT44(in_lr,iVar2);
}

