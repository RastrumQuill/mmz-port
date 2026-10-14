// sub_08076810 at 0x08076810 (thumb)

undefined4 sub_08076810(int param_1)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar2 = *(ushort *)(uint *)(param_1 + 0x90);
  if ((uVar2 & 0x200) == 0) {
    if ((uVar2 & 4) == 0) {
      bVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      cVar1 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if ((cVar1 != '\x01') && ((bVar3 == 0 || ((bVar3 & 0x80) != 0)))) goto LAB_0807692c;
      uVar4 = 3;
    }
    else {
      *(uint *)(param_1 + 0x90) = uVar2 & 0x200;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      uVar4 = 2;
    }
    sub_0808827C(uVar4,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b188c,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) * -3) / 2;
      *(int *)(param_1 + 0x58) = (*(int *)(param_1 + 0x58) * -3) / 2;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else if (*(int *)(param_1 + 0x58) < 0) {
      sub_08001EAC(4);
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    else {
      sub_08001EAC(4);
      *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
    }
LAB_0807692c:
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(param_1 + 0xe) == '\0') {
        if (DAT_02022f78 != '\0') {
          sub_0800561C(param_1 + 0x74,&DAT_082b18a8);
          *(undefined *)(param_1 + 0xe) = 1;
        }
      }
      else if (DAT_02022f78 == '\0') {
        sub_0800561C(param_1 + 0x74,&DAT_082b1870);
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  }
  return in_lr;
}

