// sub_0809C488 at 0x0809C488 (thumb)

undefined4 sub_0809C488(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5178 + (uint)*(byte *)(param_1 + 0x10) * 4));
  uVar1 = sub_0809C608(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

