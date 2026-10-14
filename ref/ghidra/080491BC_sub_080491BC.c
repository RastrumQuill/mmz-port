// sub_080491BC at 0x080491BC (thumb)

undefined4 sub_080491BC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    sub_0800561C(param_1 + 0x74,&DAT_082aec2c);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if (*(uint *)(param_1 + 0xc0) < 0x6000) {
    if ((bVar1 & 1) != 1) {
LAB_08049258:
      uVar3 = 1;
      goto LAB_08049262;
    }
  }
  else if ((bVar1 & 1) != 0) goto LAB_08049258;
  uVar3 = 2;
LAB_08049262:
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

