// sub_0805CFDC at 0x0805CFDC (thumb)

undefined4 sub_0805CFDC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb4;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x4b) {
    sub_08001EAC(0xeb);
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    if (bVar1 < 0x4c) {
      if (bVar1 == 0x1e) {
        sub_08001EAC(0xeb);
        sub_08079154(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50),0);
      }
      goto LAB_0805d074;
    }
    if (bVar1 != 0x78) goto LAB_0805d074;
    sub_08001EAC(0xeb);
    iVar3 = *(int *)(param_1 + 0x4c) + -0x800;
  }
  sub_08079154(iVar3,*(undefined4 *)(param_1 + 0x50),0);
LAB_0805d074:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

