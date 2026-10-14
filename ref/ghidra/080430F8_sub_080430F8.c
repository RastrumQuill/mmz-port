// sub_080430F8 at 0x080430F8 (thumb)

undefined4 sub_080430F8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  cVar2 = sub_08042DE4();
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08029778(param_1,6);
      uVar3 = sub_0804246C(param_1);
      *(undefined *)(param_1 + 0x12) = (&DAT_082ae7ed)[uVar3 & 0xff];
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = sub_0804246C(param_1);
      *(undefined *)(param_1 + 0x12) = (&DAT_082ae7ed)[uVar3 & 0xff];
      bVar1 = *(byte *)(param_1 + 10) >> 4;
      local_18 = (bVar1 & 1) * 0x1e00 + *(int *)(param_1 + 0x4c) + -0xf00;
      local_14 = *(int *)(param_1 + 0x50) + -0x2100;
      if (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50) < -0x5000) {
        pcVar4 = &DAT_082ae805 + *(byte *)(param_1 + 0x13);
      }
      else {
        pcVar4 = &DAT_082ae800 + *(byte *)(param_1 + 0x13);
      }
      cVar2 = *pcVar4;
      if ((bVar1 & 1) != 0) {
        cVar2 = -0x80 - cVar2;
      }
      iVar5 = sub_0804246C(param_1);
      sub_08085730(&local_18,*(undefined4 *)(&DAT_082ae7f4 + ((uint)(iVar5 << 0x18) >> 0x16)),cVar2)
      ;
      sub_08001EAC(0x84);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      uVar3 = sub_0804246C(param_1);
      if (*(char *)(param_1 + 0x13) == (&DAT_082ae7f0)[uVar3 & 0xff]) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

