// sub_08088FA0 at 0x08088FA0 (thumb)

undefined4 sub_08088FA0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar1 = sub_080079CC(iVar2,iVar3 + 0x800);
  if (cVar1 != '\0') {
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(undefined4 *)(param_1 + 0x50);
    sub_0808827C(1,&local_10);
    sub_0808887C(param_1,&local_10,*(undefined *)(param_1 + 0x11),4);
    sub_0808887C(param_1,&local_10,*(undefined *)(param_1 + 0x11),5);
    sub_0808887C(param_1,&local_10,*(undefined *)(param_1 + 0x11),6);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

