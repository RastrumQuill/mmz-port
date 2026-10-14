// sub_080AE880 at 0x080AE880 (thumb)

undefined4 sub_080AE880(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885fb74,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80aee19;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  pcVar3 = (char *)(iVar4 + 0xd8);
  if (*pcVar3 == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      if (*(char *)(param_1 + 0xf) == '\0') {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == -1) {
          iVar4 = sub_081284E0((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)) * 0x100 >>
                               0x10,((*(int *)(param_1 + 0x58) + 0xf00) -
                                    *(int *)(DAT_0202dbf0 + 0x58)) * 0x100 >> 0x10);
          uVar2 = (((uint)(iVar4 << 0x10) >> 0x18) + 0x80) * 0x1000000;
          *(int *)(param_1 + 0x5c) =
               (int)*(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17));
          *(int *)(param_1 + 0x60) = (int)*(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17));
          *(undefined *)(param_1 + 0x12) = 0x60;
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        }
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == -1) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
    }
    else {
      *pcVar3 = '\x01';
      iVar4 = DAT_0202dbf0;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1300;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080AEA6C(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

