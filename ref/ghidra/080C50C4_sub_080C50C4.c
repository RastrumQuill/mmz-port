// sub_080C50C4 at 0x080C50C4 (thumb)

undefined4 sub_080C50C4(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 in_lr;
  
  if ((DAT_02004ca8 & 2) == 0) {
    uVar1 = *(undefined *)(param_1 + 0x9e4);
    uVar3 = *(undefined *)(param_1 + 0x9e5);
    uVar4 = sub_080B4DA4(&DAT_0202b5a0,uVar1);
    uVar5 = uVar4 & 0xff;
    uVar6 = DAT_02004ca8 & 1;
    if ((DAT_02004ca8 & 1) == 0) {
      uVar3 = sub_080B4ABC(&DAT_0202b5a0,uVar1,uVar3);
      uVar4 = sub_080B4DA4(&DAT_0202b5a0,uVar1,uVar3);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == uVar5) {
        cVar2 = sub_080B4DEC(uVar4,uVar4);
        if (cVar2 == '\0') {
          sub_080C5B00(&DAT_0202b5a0,uVar4);
        }
        else {
          uVar1 = (undefined)uVar6;
          *(undefined *)(param_1 + 2) = uVar1;
          *(undefined *)(param_1 + 3) = uVar1;
          *(ushort *)(param_1 + 4) = uVar6;
          sub_08001EAC(0x29);
        }
      }
      else {
        *(undefined *)(param_1 + 0x9e5) = uVar3;
        sub_08001EAC(0x29);
        sub_080C5B00(&DAT_0202b5a0,uVar4);
      }
    }
    else {
      if (((uVar5 - 1 < 0x4e) &&
          (((int)(uint)(byte)(&DAT_0202b74e)[(uVar4 << 0x18) >> 0x1b] >> (uVar4 & 7) & 1U) != 0)) &&
         (cVar2 = sub_080B47D8(&DAT_0202b5a0,uVar5), cVar2 == '\0')) {
        *(undefined *)(param_1 + 2) = 2;
        *(undefined *)(param_1 + 3) = 0;
        *(undefined2 *)(param_1 + 4) = 0;
        *(char *)(param_1 + 0x9ea) = (char)uVar4;
        *(undefined *)(param_1 + 0x9eb) = (&DAT_082b6ea4)[uVar5 * 0xc];
        sub_08001EAC(0x2a);
        return in_lr;
      }
      sub_08001EAC(0xc1);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_08001EAC(0x28);
  }
  return in_lr;
}

