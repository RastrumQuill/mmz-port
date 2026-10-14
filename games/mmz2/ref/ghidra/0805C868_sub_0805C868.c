// sub_0805C868 at 0x0805C868 (thumb)

undefined4 sub_0805C868(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ebbd = DAT_0202ebbd | 2;
    sub_080127E4(param_1,0xa916);
    sub_08006E08(param_1 + 0x74,&DAT_0833cd6c);
    *(undefined *)(param_1 + 0xbe) = 0;
    iVar3 = *(int *)(param_1 + 200);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    uVar2 = sub_080BD70C(param_1,1,0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_080032EC(0xfa);
    sub_080032EC(0x6f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x2d;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

