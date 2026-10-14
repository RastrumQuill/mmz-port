// sub_08068D14 at 0x08068D14 (thumb)

undefined4 sub_08068D14(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    puVar1 = (undefined4 *)(param_1 + 0x90);
    if ((*(ushort *)puVar1 & 0x40) == 0) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0ccc + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0ce4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(iVar2 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(iVar2 + 0x70) * 4 + *(int *)(iVar2 + 0x6c)));
      *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(iVar2 + 0x42);
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(byte *)(iVar2 + 0x41) & 0xf0;
      return in_lr;
    }
    sub_08068AE8(param_1);
    *(uint *)(iVar2 + 200) = *(uint *)(iVar2 + 200) | 0x10;
    if ((*(ushort *)puVar1 & 0x1000) == 0) {
      sub_08068C04(param_1,9);
    }
    else if ((*(ushort *)puVar1 & 0x800) == 0) {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      if (*(int *)(param_1 + 0x50) == iVar2) {
        sub_08068C04(param_1,10);
      }
      else {
        sub_08068C04(param_1,9);
      }
    }
    else {
      sub_08068C04(param_1,0xb);
    }
    *puVar1 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
    *puVar1 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

