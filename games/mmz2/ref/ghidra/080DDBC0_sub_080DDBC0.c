// sub_080DDBC0 at 0x080DDBC0 (thumb)

undefined4 sub_080DDBC0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0x10);
  piVar3 = (int *)sub_080DE178();
  *(uint *)(param_1 + 0x54) =
       *(int *)(&DAT_0834c3f8 + (uint)bVar2 * 8) + (uint)bVar1 * 0x200 * (uint)*(byte *)(piVar3 + 1)
  ;
  if (*(char *)((int)piVar3 + 6) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      sub_080127E4(param_1,*(undefined2 *)
                            (&DAT_0834c3e8 + (uint)*(byte *)(*piVar3 + 0x212 + (uint)bVar2) * 2));
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

