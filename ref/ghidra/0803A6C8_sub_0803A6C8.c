// sub_0803A6C8 at 0x0803A6C8 (thumb)

undefined4 sub_0803A6C8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 6;
    uVar3 = sub_08001EAC(0x16);
    *(undefined2 *)(param_1 + 0xc0) = uVar3;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(iVar5 + 0x4c) + -0x1500;
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x4c) + 0x1500;
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      sub_08029778(param_1,1);
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
      sub_08029874(param_1,&DAT_082adba0,0xff);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x20;
    }
  }
  else if ((bVar1 == 2) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  sub_080297C0(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

