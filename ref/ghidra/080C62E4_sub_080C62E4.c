// sub_080C62E4 at 0x080C62E4 (thumb)

undefined4 sub_080C62E4(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  if ((DAT_02004ca8 & 2) == 0) {
    uVar1 = *(undefined *)(param_1 + 0x9e5);
    uVar3 = *(undefined *)(param_1 + 0x9e6);
    uVar5 = sub_080B4DA4(&DAT_0202b5a0,uVar1,uVar3);
    uVar9 = uVar5 & 0xff;
    uVar8 = DAT_02004ca8 & 1;
    if ((DAT_02004ca8 & 1) == 0) {
      uVar3 = sub_080B4ABC(&DAT_0202b5a0,uVar1,uVar3);
      uVar5 = sub_080B4DA4(&DAT_0202b5a0,uVar1,uVar3);
      uVar5 = uVar5 & 0xff;
      if (uVar5 == uVar9) {
        cVar4 = sub_080B4DEC(uVar5,uVar5);
        if (cVar4 == '\0') {
          sub_080C673C(&DAT_0202b5a0,uVar5);
        }
        else {
          *(undefined *)(param_1 + 2) = 1;
          *(char *)(param_1 + 3) = (char)uVar8;
          *(ushort *)(param_1 + 4) = uVar8;
          sub_08001EAC(0x29);
        }
      }
      else {
        *(undefined *)(param_1 + 0x9e6) = uVar3;
        sub_08001EAC(0x29);
        sub_080C673C(&DAT_0202b5a0,uVar5);
      }
    }
    else {
      if (uVar9 - 1 < 0x4e) {
        uVar7 = (uVar5 << 0x18) >> 0x1b;
        if (((((int)(uint)(byte)(&DAT_0202b74e)[uVar7] >> (uVar5 & 7) & 1U) != 0) &&
            (((int)(uint)(byte)(&DAT_0202b758)[uVar7] >> (uVar5 & 7) & 1U) == 0)) &&
           (iVar6 = sub_080B47D8(&DAT_0202b5a0,uVar9), 0 < iVar6 * 0x1000000)) {
          *(undefined *)(param_1 + 2) = 0;
          *(undefined *)(param_1 + 3) = 0;
          *(undefined2 *)(param_1 + 4) = 0;
          bVar2 = *(byte *)(param_1 + 0x9e4);
          (&DAT_0202b720)[bVar2] = (char)uVar5;
          uVar5 = 3;
          do {
            uVar7 = uVar5 - 1;
            if ((uVar7 != bVar2) && ((byte)(&DAT_0202b71f)[uVar5] == uVar9)) {
              (&DAT_0202b71f)[uVar5] = 0;
            }
            uVar5 = uVar7;
          } while (uVar7 != 0);
          sub_08001EAC(0x2a);
          return in_lr;
        }
      }
      sub_08001EAC(0xc1);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_08001EAC(0x28);
  }
  return in_lr;
}

