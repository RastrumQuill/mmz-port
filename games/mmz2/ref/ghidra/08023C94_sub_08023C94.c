// sub_08023C94 at 0x08023C94 (thumb)

undefined8 sub_08023C94(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  ushort uVar6;
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
      uVar3 = 5;
      goto LAB_08023f4e;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (bVar1 == 0) {
      if (((*(ushort *)(param_1 + 0xe4) & 0xf) == 0) ||
         (bVar1 = *(byte *)(param_1 + 0x196) & 0x20, (*(byte *)(param_1 + 0x196) & 0x20) != 0)) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        uVar3 = 1;
      }
      else {
        pbVar4 = (byte *)(param_1 + 0x176);
        if (((*pbVar4 < 2) || (*(char *)(param_1 + 0x2b6) != '\x03')) &&
           ((cVar2 = sub_0801E91C(param_1), cVar2 != '\0' &&
            (iVar5 = sub_08031830(param_1), iVar5 != 0)))) {
          *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
          *(byte *)(param_1 + 0xd) = bVar1;
          *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 2;
          *(byte *)(param_1 + 0x17a) = *pbVar4;
          *pbVar4 = bVar1;
          *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
          *(byte *)(param_1 + 0x177) = bVar1;
          *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
          *(byte *)(param_1 + 0x178) = bVar1;
          *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
          *(byte *)(param_1 + 0x179) = bVar1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
          uVar6 = bVar1 & 0xc;
          if ((bVar1 & 0xc) == 0) {
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(char *)(param_1 + 0xd) = (char)uVar6;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(ushort *)(param_1 + 0xe) = uVar6;
            *(byte *)(param_1 + 0x17a) = *pbVar4;
            *pbVar4 = 0;
            *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
            *(undefined *)(param_1 + 0x177) = 0;
            *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
            *(undefined *)(param_1 + 0x178) = 0;
            *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
            *(undefined *)(param_1 + 0x179) = 0;
          }
        }
        uVar3 = 0;
      }
      goto LAB_08023f4e;
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
  uVar3 = 7;
LAB_08023f4e:
  return CONCAT44(in_lr,uVar3);
}

