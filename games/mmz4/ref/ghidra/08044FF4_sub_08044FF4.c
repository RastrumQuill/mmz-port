// sub_08044FF4 at 0x08044FF4 (thumb)

undefined4 sub_08044FF4(int param_1,undefined4 *param_2,undefined param_3,uint param_4)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = sub_08005500(DAT_0202ed88);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar3 + 9) = 0x16;
      *(undefined4 *)(iVar3 + 0x14) = 0x80450d5;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar3 + 9) = 0x16;
      *(undefined4 *)(iVar3 + 0x14) = 0x80450d5;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x22) = uVar1;
    *(int *)(iVar3 + 0x2c) = param_1;
    uVar4 = param_2[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_2;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    *(undefined *)(iVar3 + 0x10) = 1;
    *(undefined *)(iVar3 + 0x11) = param_3;
    if ((param_4 & 0xff) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(iVar3 + 0x4c) = (char)(param_4 & 1);
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (byte)((param_4 & 1) << 4);
  }
  return in_lr;
}

