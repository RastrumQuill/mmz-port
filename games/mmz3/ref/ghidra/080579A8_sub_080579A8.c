// sub_080579A8 at 0x080579A8 (thumb)

undefined4 sub_080579A8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x6000) {
    iVar3 = 0;
  }
  else if (iVar3 < 0xb000) {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
  }
  pcVar5 = (char *)(param_1 + 0xc0);
  iVar3 = iVar3 * 0x10;
  pcVar4 = (char *)(param_1 + 0xc1);
LAB_08057a0a:
  do {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 0xf;
    if (*pcVar5 == (&DAT_08361244)[uVar2 + iVar3]) {
      if (*pcVar4 != '\0') goto LAB_08057a0a;
    }
    if (((&DAT_08361244)[uVar2 + iVar3] != '\x0f') || (4 < *(byte *)(DAT_02030160 + 1))) {
      if (*pcVar5 == (&DAT_08361244)[uVar2 + iVar3]) {
        cVar1 = *pcVar4 + '\x01';
      }
      else {
        cVar1 = '\0';
        *pcVar5 = (&DAT_08361244)[uVar2 + iVar3];
      }
      *pcVar4 = cVar1;
      *(undefined *)(param_1 + 0xd) = (&DAT_08361244)[uVar2 + iVar3];
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  } while( true );
}

