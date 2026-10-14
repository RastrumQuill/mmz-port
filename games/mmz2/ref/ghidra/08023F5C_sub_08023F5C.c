// sub_08023F5C at 0x08023F5C (thumb)

undefined8 sub_08023F5C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x400) != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = bVar1 & 0x1e;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar4 = 5;
      goto LAB_08024238;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (bVar1 == 0) {
      if ((*(ushort *)(param_1 + 0xe4) & 0xf) == 0) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
LAB_08024110:
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        uVar4 = 1;
      }
      else {
        if ((*(char *)(param_1 + 0x2b6) == '\0') || (*(byte *)(param_1 + 0x176) < 3)) {
          bVar1 = *(byte *)(param_1 + 0x196) & 0x20;
          if ((*(byte *)(param_1 + 0x196) & 0x20) != 0) {
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 0;
            goto LAB_08024110;
          }
          cVar3 = sub_0801E978(param_1);
          if (cVar3 != '\0') {
            bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
            uVar5 = bVar2 & 0xc;
            if ((bVar2 & 0xc) == 0) {
              *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
              *(char *)(param_1 + 0xd) = (char)uVar5;
              *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
              *(ushort *)(param_1 + 0xe) = uVar5;
              *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
              *(undefined *)(param_1 + 0x176) = 0;
              *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
              *(undefined *)(param_1 + 0x177) = 0;
              *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
              *(undefined *)(param_1 + 0x178) = 0;
              *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
              *(undefined *)(param_1 + 0x179) = 0;
            }
            else {
              *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
              *(byte *)(param_1 + 0xd) = bVar1;
              *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
              *(undefined2 *)(param_1 + 0xe) = 1;
              *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x176);
              *(byte *)(param_1 + 0x176) = bVar1;
              *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
              *(byte *)(param_1 + 0x177) = bVar1;
              *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
              *(byte *)(param_1 + 0x178) = bVar1;
              *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
              *(byte *)(param_1 + 0x179) = bVar1;
            }
          }
        }
        uVar4 = 0;
      }
      goto LAB_08024238;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  uVar4 = 7;
LAB_08024238:
  return CONCAT44(in_lr,uVar4);
}

