// sub_080AEA14 at 0x080AEA14 (thumb)

undefined4 sub_080AEA14(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C6C4(param_1);
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0xe) = 0;
    cVar1 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  iVar2 = *(byte *)(param_1 + 0x12) + 4;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar2] * 4;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

