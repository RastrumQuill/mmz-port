// sub_08048EFC at 0x08048EFC (thumb)

undefined4 sub_08048EFC(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4));
  if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0xb4)) {
    uVar2 = uVar2 ^ 1;
  }
  pcVar4 = (char *)(param_1 + 0xc3);
  iVar5 = uVar2 * 0x10;
  pcVar3 = (char *)(param_1 + 0xc4);
LAB_08048f4a:
  do {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 0xf;
    if (*pcVar4 == (&DAT_0835f64c)[uVar2 + iVar5]) {
      if (*pcVar3 != '\0') goto LAB_08048f4a;
    }
    if (((&DAT_0835f64c)[uVar2 + iVar5] != '\x11') || (4 < *(byte *)(DAT_02030160 + 1))) {
      if (*pcVar4 == (&DAT_0835f64c)[uVar2 + iVar5]) {
        cVar1 = *pcVar3 + '\x01';
      }
      else {
        cVar1 = '\0';
        *pcVar4 = (&DAT_0835f64c)[uVar2 + iVar5];
      }
      *pcVar3 = cVar1;
      *(undefined *)(param_1 + 0xd) = (&DAT_0835f64c)[uVar2 + iVar5];
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  } while( true );
}

