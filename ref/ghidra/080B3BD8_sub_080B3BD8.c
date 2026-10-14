// sub_080B3BD8 at 0x080B3BD8 (thumb)

undefined4 sub_080B3BD8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  uVar1 = *(ushort *)(undefined4 *)(param_1 + 0x90);
  if ((uVar1 & 1) == 0) {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xb8) = iVar2;
    if (*(int *)(param_1 + 0x50) < iVar2) {
      if (*(int *)(param_1 + 0x58) < 0x700) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
      }
    }
    else {
      *(int *)(param_1 + 0x50) = iVar2;
      *(uint *)(param_1 + 0x58) = uVar1 & 1;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + -0x800;
    sub_080B596C((&DAT_082b6e2c)[(uint)*(byte *)(param_1 + 0x10) * 2]);
    sub_0808827C(2,&local_18);
    sub_08001EAC(2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

