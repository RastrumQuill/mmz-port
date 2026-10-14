// sub_0807AED4 at 0x0807AED4 (thumb)

undefined4 sub_0807AED4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_f4 [76];
  undefined4 local_a8;
  undefined4 local_a4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xb8);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
    if ((iVar4 <= iVar2) && (iVar2 <= iVar4 + 0x1e000)) {
      cVar1 = sub_080079CC(iVar2,iVar3);
      if (cVar1 == '\0') {
        return in_lr;
      }
      cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      if (cVar1 == 'A') {
        return in_lr;
      }
      local_a8 = *(undefined4 *)(param_1 + 0x4c);
      local_a4 = *(undefined4 *)(param_1 + 0x50);
      sub_0807A5F8(auStack_f4,(*(byte *)(param_1 + 0x10) & 1) + 8,0);
    }
  }
  else {
    sub_0808827C(1,param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

