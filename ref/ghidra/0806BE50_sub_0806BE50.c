// sub_0806BE50 at 0x0806BE50 (thumb)

undefined4 sub_0806BE50(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x20) + 0xe0) >> *(sbyte *)(param_1 + 0x11) & 1U)
      == 0) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else if (*(char *)(param_1 + 0xf) != '\0') {
    sub_08075250(param_1);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x20) + 0xd8) >> *(sbyte *)(param_1 + 0x11) & 1U)
      != 0) {
    if (*(int *)(param_1 + 0x4c) < *(int *)(iVar3 + 0x4c)) {
      puVar2 = (undefined *)(iVar3 + 0xdc);
    }
    else {
      puVar2 = (undefined *)(iVar3 + 0xdd);
    }
    *puVar2 = 0;
    uVar1 = sub_080697AC(param_1,*(undefined *)(param_1 + 0x10),0,
                         *(int *)(param_1 + 0x4c) < *(int *)(iVar3 + 0x4c));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x38;
  }
  return in_lr;
}

