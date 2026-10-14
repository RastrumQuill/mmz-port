// sub_08050760 at 0x08050760 (thumb)

undefined4 sub_08050760(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080033F0(param_1 + 0x6c,3);
      *(undefined *)(param_1 + 0x12) = 0x18;
      sub_0800561C(param_1 + 0x74,&DAT_082af374);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0xc;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (8 < *(byte *)(param_1 + 0x12)) {
        uVar3 = (uint)(0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c));
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar3 * -2 + 1) * 0x100;
        sub_0805026C(param_1,uVar3);
      }
      if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
        *(undefined *)(param_1 + 0x12) = 0xc;
      }
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082af358);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

