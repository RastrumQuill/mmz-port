// sub_0806C014 at 0x0806C014 (thumb)

undefined4 sub_0806C014(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (((*(uint *)(iVar1 + 0xc) & 0xff00ff00) == 0x1000800) &&
     ((8 - (*(byte *)(iVar1 + 0xda) >> 5) & 7) == *(byte *)(param_1 + 0x11))) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

