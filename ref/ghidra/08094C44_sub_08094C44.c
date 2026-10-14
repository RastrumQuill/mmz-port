// sub_08094C44 at 0x08094C44 (thumb)

undefined4 sub_08094C44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(DAT_0202286c + 10) & 0x10) == 0) {
    iVar1 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x74);
  }
  else {
    iVar1 = *(int *)(DAT_0202286c + 0x4c) + *(int *)(param_1 + 0x74);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = DAT_0202286c;
  *(int *)(param_1 + 0x50) = *(int *)(DAT_0202286c + 0x50) + *(int *)(param_1 + 0x78);
  iVar1 = sub_0801BC08(iVar1,1,1,1,1,0);
  iVar1 = *(int *)(param_1 + 0x54) - iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  if (((iVar1 < 0) || (1 < *(byte *)(iVar2 + 0xc))) || ((DAT_02022b64 & 0x10) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

