// sub_08095954 at 0x08095954 (thumb)

undefined4 sub_08095954(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  local_14 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = local_14;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = -0x2000;
  }
  else {
    iVar2 = 0x2000;
  }
  local_14 = local_14 + iVar2;
  local_10 = *(int *)(param_1 + 0x50) + -0x2400;
  cVar1 = sub_080079CC(local_14);
  if ((cVar1 != '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    sub_0808827C(2,&local_14);
    *(int *)(param_1 + 0x4c) = local_14;
    *(int *)(param_1 + 0x50) = local_10;
    sub_080957A0(param_1,2,4,0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,4,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,4,0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,4,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,4,0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,4,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0xc00;
    sub_080957A0(param_1,2,1,*(undefined *)(param_1 + 0x7c));
    sub_08001EAC(2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

