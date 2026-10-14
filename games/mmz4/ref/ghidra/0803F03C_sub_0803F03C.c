// sub_0803F03C at 0x0803F03C (thumb)

undefined8
sub_0803F03C(int param_1,int param_2,undefined param_3,undefined4 param_4,int param_5,char param_6,
            undefined param_7,undefined param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar2 + 9) = 4;
      *(undefined4 *)(iVar2 + 0x14) = 0x803f1cd;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 2;
      sub_0803A8E0(1,0,0);
    }
    else {
      *(undefined *)(iVar2 + 9) = 4;
      *(undefined4 *)(iVar2 + 0x14) = 0x803f1cd;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 1;
      sub_0803A8E0(0,0,0);
    }
    *(int *)(iVar2 + 0x28) = param_2;
    *(undefined *)(iVar2 + 0x10) = param_3;
    *(undefined *)(iVar2 + 0x11) = 0;
    bVar1 = *(byte *)(param_2 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)uVar3;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    bVar1 = param_6 + 0x80;
    iVar4 = param_5 * (short)(&DAT_08128c10)[bVar1] >> 8;
    *(int *)(iVar2 + 0x5c) = iVar4;
    *(int *)(iVar2 + 0x60) =
         param_5 * *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) >> 8;
    if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
      *(int *)(iVar2 + 0x54) = *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c);
    }
    else {
      *(int *)(iVar2 + 0x54) = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x5c);
      *(int *)(iVar2 + 0x5c) = -iVar4;
    }
    *(int *)(iVar2 + 0x58) = *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x60);
    *(int *)(iVar2 + 0xb4) = param_5;
    *(byte *)(iVar2 + 0xb8) = bVar1;
    *(undefined *)(iVar2 + 0xb9) = param_7;
    *(undefined *)(iVar2 + 0xba) = param_8;
  }
  return CONCAT44(in_lr,iVar2);
}

