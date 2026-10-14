// sub_0807C204 at 0x0807C204 (thumb)

undefined4 sub_0807C204(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    cVar1 = sub_080079CC();
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined *)(param_1 + 0x12) = 0x20;
      if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      }
      else {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_24 = *(undefined4 *)(param_1 + 0x4c);
      local_20 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x50) = local_20;
      sub_080943B8(&local_24,0,0x100,0);
      sub_080943B8(&local_24,0,0xffffff00,0);
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_080943B8(&local_24,1,uVar2 * 2 >> 0x11 & 0x3f,-(uVar3 * 2 >> 0x11 & 0x7f));
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_080943B8(&local_24,1,-(uVar2 * 2 >> 0x11 & 0x3f),-(uVar3 * 2 >> 0x11 & 0x7f));
    }
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\0') {
      sub_0807BBF8(param_1,*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

