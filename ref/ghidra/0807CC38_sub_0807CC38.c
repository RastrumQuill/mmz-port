// sub_0807CC38 at 0x0807CC38 (thumb)

undefined4 sub_0807CC38(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)*(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0x11) = 0;
  cVar2 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),0x18);
  if (cVar2 == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x4c) + -0x1000;
    }
    else {
      local_1c = *(int *)(param_1 + 0x4c) + 0x1000;
    }
    iVar3 = sub_080C8C38(*(undefined *)(param_1 + 0x12),0x18);
    if (*(int *)(&DAT_082b2450 +
                ((uint)(iVar3 << 0x18) >> 0x16) + (uint)*(byte *)(param_1 + 0xc6) * 0x28) != -1) {
      local_18 = *(int *)(param_1 + 0x50) +
                 *(int *)(&DAT_082b2450 +
                         ((uint)(iVar3 << 0x18) >> 0x16) + (uint)*(byte *)(param_1 + 0xc6) * 0x28);
      sub_0807BD1C(&local_1c,((uint)bVar1 << 0x18) >> 0x1c & 1,param_1);
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (((cVar2 == -1) || (1 < *(byte *)(iVar4 + 0xc))) || (*(char *)(iVar4 + 0xd) == '\x13')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_0807BF04(param_1);
  }
  return in_lr;
}

