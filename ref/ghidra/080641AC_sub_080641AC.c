// sub_080641AC at 0x080641AC (thumb)

undefined4 sub_080641AC(int param_1)

{
  ushort uVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(bool *)(param_1 + 0xc4) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  uVar1 = *(ushort *)(undefined4 *)(param_1 + 0x90);
  if ((uVar1 & 0x1000) == 0) {
    uVar2 = 1;
  }
  else if ((uVar1 & 0x800) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

