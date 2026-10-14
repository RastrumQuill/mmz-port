// sub_0806C0FC at 0x0806C0FC (thumb)

undefined4 sub_0806C0FC(int param_1)

{
  char cVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + -0x2800;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    puVar2 = (ushort *)(*(int *)(param_1 + 0x20) + 0xd8);
    *puVar2 = ((ushort)(1 << *(sbyte *)(param_1 + 0x11)) ^ 0xff) & *puVar2;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0xdb) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

