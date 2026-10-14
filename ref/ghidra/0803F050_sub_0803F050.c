// sub_0803F050 at 0x0803F050 (thumb)

undefined4 sub_0803F050(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 4;
    sub_0800561C(param_1 + 0x74,&DAT_082ade88);
    sub_08029778(param_1,7);
    iVar2 = sub_08005458(DAT_02022e94);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 0x13;
      *(undefined4 *)(iVar2 + 0x14) = 0x803dbf5;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar2 + 0x10) = 1;
      *(int *)(iVar2 + 0x20) = param_1;
    }
    sub_08001EAC(0xa9);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') && (iVar2 = sub_08005458(DAT_02022e94), iVar2 != 0)) {
    *(undefined *)(iVar2 + 9) = 0x13;
    *(undefined4 *)(iVar2 + 0x14) = 0x803dbf5;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(iVar2 + 0x10) = 2;
    *(int *)(iVar2 + 0x20) = param_1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == ' ') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  sub_080297C0(param_1);
  return in_lr;
}

