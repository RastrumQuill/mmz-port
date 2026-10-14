// sub_0806379C at 0x0806379C (thumb)

undefined4 sub_0806379C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_080632B4(param_1 + 0x4c,1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_08001EAC(0x89);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x12) != '\x01') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
  iVar2 = *(int *)(iVar3 + 0x4c);
  iVar1 = sub_080C8AD0(*(int *)(param_1 + 0x4c) - iVar2,*(undefined *)(param_1 + 0x12));
  *(int *)(iVar3 + 0x4c) = iVar2 + iVar1;
  iVar2 = *(int *)(iVar3 + 0x50);
  iVar1 = sub_080C8AD0(*(int *)(param_1 + 0x50) - iVar2,*(undefined *)(param_1 + 0x12));
  *(int *)(iVar3 + 0x50) = iVar2 + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

