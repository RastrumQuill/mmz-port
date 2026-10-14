// sub_08048198 at 0x08048198 (thumb)

undefined4 sub_08048198(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    uVar4 = sub_08099E1C(param_1);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082aea50);
    sub_08001EAC(0xb7);
  }
  sub_080297C0(param_1);
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && ((*(ushort *)(param_1 + 0x90) & 0x800) != 0)) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  bVar3 = *(byte *)(param_1 + 0xf);
  if (bVar3 == 1) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_08048286;
    sub_08029778(param_1,0x10);
    sub_080297C0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x18;
    uVar2 = 2;
  }
  else {
    if (1 < bVar3) {
      if ((bVar3 == 2) &&
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
        *(undefined *)(param_1 + 0xd) = 0x15;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      goto LAB_08048286;
    }
    if ((bVar3 != 0) ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != -1))
    goto LAB_08048286;
    sub_08029778(param_1,0xf);
    sub_080297C0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x18;
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xca) = uVar2;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  sub_08001EAC(0xb7);
LAB_08048286:
  if (*(char *)(param_1 + 0x12) == '\x01') {
    iVar5 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar5;
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

