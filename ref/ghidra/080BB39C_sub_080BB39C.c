// sub_080BB39C at 0x080BB39C (thumb)

undefined4 sub_080BB39C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar1 + 1) < 2) {
    if ((*(byte *)(iVar1 + 1) == 0) || (*(char *)(iVar1 + 2) == '\0')) {
      if (((uint)*(byte *)(param_1 + 0x74) == (uint)(byte)(&DAT_0202b720)[*(byte *)(param_1 + 0x11)]
          ) && (*(byte *)(param_1 + 0x74) - 1 < 0x4e)) {
        *(uint *)(param_1 + 0x4c) =
             *(int *)(iVar1 + 0x9e8) + (uint)*(byte *)(param_1 + 0x11) * 0x2000 + 0x1400;
        *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x9ec) + 0x1800;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080BB478(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

