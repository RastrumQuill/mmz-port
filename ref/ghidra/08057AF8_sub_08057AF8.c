// sub_08057AF8 at 0x08057AF8 (thumb)

undefined4 sub_08057AF8(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,5);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  puVar2 = (uint *)(iVar3 + 0xbc);
  *puVar2 = *puVar2 & 0xffffffdf;
  sub_08055874(param_1);
  cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\t') {
    *puVar2 = *puVar2 & 0xfffffff7;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *puVar2 = *puVar2 & 0xffffff7b;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

