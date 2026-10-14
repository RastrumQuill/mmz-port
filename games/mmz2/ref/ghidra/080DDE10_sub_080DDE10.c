// sub_080DDE10 at 0x080DDE10 (thumb)

undefined4 sub_080DDE10(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)sub_080DE178();
  *(uint *)(param_1 + 0x54) = (uint)bVar1 * 0x200 * (uint)*(byte *)(piVar2 + 1) + 0x4400;
  if (*(char *)((int)piVar2 + 6) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3f0 + (uint)*(byte *)(*piVar2 + 0x215) * 2));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  return in_lr;
}

