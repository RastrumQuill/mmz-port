// sub_0805ECB0 at 0x0805ECB0 (thumb)

undefined4 sub_0805ECB0(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa14);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pcVar6 = (char *)(param_1 + 0x71);
  sub_08006E08(param_1 + 0x74,&DAT_0833cedc + (uint)(byte)(&DAT_0833d0c0)[*pcVar6] * 0x18);
  if ((*(char *)(param_1 + 0x12) == '\0') && (*pcVar6 == '\x03')) {
    sub_080032EC(0x7b);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (((*(char *)(param_1 + 0xf) == '\0') && ((&DAT_0833d0c0)[*pcVar6] != '\0')) &&
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    iVar5 = *(int *)(param_1 + 0xdc);
    if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(iVar5 + 0xa4) != 0)) {
      uVar3 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10
                           ,(*(int *)(DAT_0202e130 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000)) *
                            0x10 >> 0x10);
      uVar3 = ((int)((uVar3 & 0xffff) + 0x4000) >> 8) - 0x40U & 0xff;
      sVar1 = (&DAT_080ef450)[uVar3 + 0x40 & 0xff];
      sVar2 = (&DAT_080ef450)[uVar3];
      iVar7 = *(int *)(param_1 + 0xdc);
      iVar5 = sub_080EF150(sVar1 * 7,0x30);
      iVar5 = -iVar5;
      iVar4 = sub_080EF150(sVar2 * 7,0x30);
      sub_08022EA8(iVar7,0,sVar1 * 7,sVar2 * 7,iVar5,-iVar4,0x30,3);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

