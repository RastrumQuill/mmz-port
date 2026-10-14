// sub_080652B8 at 0x080652B8 (thumb)

undefined4 sub_080652B8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad13);
    sub_08006E08(param_1 + 0x74,&DAT_0833d898);
    *(undefined *)(*(int *)(param_1 + 0xd4) + 0x11) = 1;
    iVar2 = sub_080BD70C(param_1,3,0);
    *(int *)(param_1 + 0xd4) = iVar2;
    uVar3 = sub_080AB1A4(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08002638(&DAT_084337c8,(DAT_0202e6a4 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084337d4,(DAT_0202e4a4 - 6) * 0x20 + 0x200);
    sub_080032EC(0xfa);
    sub_080032EC(0xd9);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x1d;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

